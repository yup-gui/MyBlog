let boxes = document.getElementsByClassName("box");
let btns = document.getElementsByClassName("btn");
boxes[0].addEventListener("mouseenter",function(){
  this.classList.toggle("translate-10vw");
  btns[0].addEventListener("mouseover",function(){
    this.classList.toggle("font-size-20px");
  })
})

btns[0].addEventListener("click",function(){
  this.style.backgroundColor="white";
  this.innerHTML="收藏成功";
})


