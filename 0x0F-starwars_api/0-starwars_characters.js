#!/usr/bin/node
const request = require('request');
const filmId = process.argv[2];
const url = `https://swapi-api.hbtn.io/api/films/${filmId}`;
request(url, (error, response, body) => {
  if (!error) {
    const characters = JSON.parse(body).characters;
    for (const charId in characters) {
      request(characters[charId], (error, response, body) => {
        if (!error) {
          console.log(JSON.parse(body).name);
        }
      });
    }
  }
});
