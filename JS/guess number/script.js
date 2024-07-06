
'use strict';
const body_obj = document.querySelector('body');

const guess_inp = document.querySelector('.guess');
const big_number = document.querySelector('.number');

const score_lable = document.querySelector('.score');
const msg_label = document.querySelector('.message');
const high_score_label = document.querySelector('.highscore');

const again_btn = document.querySelector('.again');
const check = document.querySelector('.check');

let total_score = 20;
let max_high_score = 0;
let hidden_num = Math.random() * 20 + 1;
hidden_num = Math.trunc(hidden_num);
console.log(hidden_num);

console.log(guess_inp.value);

check.addEventListener('click', function (event) {
  let inp_val = Number(guess_inp.value);
  if (inp_val === hidden_num) {
    msg_label.textContent = 'correct';
    body_obj.style.backgroundColor = 'green';
    big_number.textContent = hidden_num;

    if (total_score > max_high_score) {
      max_high_score = total_score;
      high_score_label.textContent = max_high_score;
    }
  } else if (inp_val > hidden_num) {
    msg_label.textContent = 'too high';
    total_score--;
    score_lable.textContent = total_score;
  }
  
});
