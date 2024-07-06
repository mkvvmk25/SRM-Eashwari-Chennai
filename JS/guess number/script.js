'use strict';
const inp = document.querySelector('.guess');
const btn = document.querySelector('.check');
const msg = document.querySelector('.message');
const number = document.querySelector('.number');
const score = document.querySelector('.score');
const again_btn = document.querySelector('.again');
const body_obj = document.querySelector('body');
const high_score_obj = document.querySelector('.highscore');

let secret_num = Math.trunc(Math.random() * 20);
let now_score = 20; // state variable

number.textContent = secret_num;

let high_score = 0;

function game_logic() {
  let k = Number(inp.value);
  if (k === secret_num) {
    // style manipulation when player wins
    /*

    */
    number.style.width = '24rem'; // these are inline styles
    body_obj.style.backgroundColor = 'green';
    number.textContent = secret_num;

    msg.textContent = '🎉 correct Number';

    if (high_score < now_score) {
      high_score = now_score;
      high_score_obj.textContent = now_score;
    }
  } else if (k < secret_num) {
    msg.textContent = 'too less';
    --now_score;
    score.textContent = now_score;
  } else if (k > secret_num) {
    --now_score;
    msg.textContent = 'high';
    score.textContent = now_score;
  }

  if (now_score === 0) {
    msg.textContent = 'u lost the game ';
  }
}
btn.addEventListener('click', game_logic);

again_btn.addEventListener('click', function () {
  secret_num = Math.trunc(Math.random() * 20);
  number.textContent = secret_num;
  now_score = 20; // state variable
  score.textContent = now_score;

  number.style.width = '15rem'; // these are inline styles
  body_obj.style.backgroundColor = '#222';
  // number.textContent = secret_num;

  msg.textContent = 'start guessing';
});
