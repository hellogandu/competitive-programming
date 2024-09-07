const { createHash } = require("crypto");

// Input format should be
// block { data;[], nonce }
// Input formate maters while creating the hash.

const input = {
  difficulty: 14,
  block: {
    data: [
      ["a4c6b9853617f4b9e8f8fa1d43fb112e", 42],
      ["8fc0e0e9d5c28c64465693b022641946", 38],
      ["8ce11dd50aff4c65d4335d366f41fe96", 56],
      ["0e111c1b217963e9ce488329283d9ccb", -44],
      ["977787d2d64581612e6e8039d00a2ba6", -73],
      ["af928974e6238e529bbb571cef6dfe2b", -44],
    ],
    nonce: null,
  },
};

const generateSHA256Hash = (str) => {
  return createHash("sha256").update(str).digest("hex");
};

const leftRange = 0;
const rightRange = 100000;
const difficulty = input["difficulty"];

const isValidEncodeHash = (difficulty, hash) => {
  const leadingZeros = Math.floor(difficulty / 4);
  const remainder = difficulty % 4;

  if (hash.slice(0, leadingZeros) !== "0".repeat(leadingZeros)) {
    return false;
  }

  if (remainder) {
    const hexChar = hash.slice(leadingZeros, leadingZeros + 1);
    const hexValue = parseInt(hexChar, 16);

    if (remainder == 1 && hexValue < 8) return true;
    if (remainder == 2 && hexValue < 4) return true;
    if (remainder == 3 && hexValue < 2) return true;
  } else {
    return true;
  }
};

const getValidNonce = (inputObj) => {
  for (let i = leftRange; i < rightRange; i++) {
    inputObj["nonce"] = i;
    const sha256Hash = generateSHA256Hash(JSON.stringify(inputObj));
    if (isValidEncodeHash(difficulty, sha256Hash)) {
      return { nonce: inputObj["nonce"], hash: sha256Hash };
    }
  }

  return "404 NOT FOUND";
};

console.log(getValidNonce(input["block"]));
