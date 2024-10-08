//搜索框点击拉伸以及实现跳转
let searchLogo=document.getElementsByClassName("head-nav-search-logo")[0];
let search=document.getElementsByClassName("search")[0];
let searchContents=document.getElementsByClassName("search-contents")[0];
searchLogo.addEventListener("click",function(){
  search.classList.toggle("search-onclick1");
  searchContents.classList.toggle("search-onclick2");
  searchContents.focus();
})
searchContents.addEventListener("keydown",function(event){
  if(event.key==="Enter"){
    window.open("https://cn.bing.com/search?q="+this.value);
  }
})

//图片悬浮改变z轴堆叠顺序
let floating=document.getElementsByClassName("floating");
function getTotalZIndex(){
  let total =0;
  for(let i = 0; i < 5 ; i++){
    total=total+Number(window.getComputedStyle(floating[i]).zIndex);
}
  return total;
}
for(let j = 0 ; j < 5 ; j++){
  floating[j].addEventListener("mouseenter",function(){
    this.style.zIndex=getTotalZIndex()-this.style.zIndex;/*防止增加过快*/
    console.log(this.style.zIndex);
  })
}
//左侧导航栏导引
let parts=document.getElementsByClassName("parts");
let whiteLotus=document.getElementsByClassName("white-lotus");
let blackLotus=document.getElementsByClassName("black-lotus");
for(let a=0;a<4;a++){
  if(a==2){
    continue;
  }
  parts[a].addEventListener("click",function(){
    parts[a+4].scrollIntoView({behavior:"smooth"});
    this.style.color="white";
    whiteLotus[a].style.filter="opacity(1)";
    blackLotus[a].style.filter="opacity(0)";
  })
}
parts[2].addEventListener("click",function(){
  window.scrollTo({
    top:deltaY[2]+1782,
    left:0,
    behavior:"smooth"
  })
})

let deltaY=[parts[4].offsetTop,parts[5].offsetTop,parts[6].offsetTop,parts[7].offsetTop];
window.addEventListener("scroll",function(){
  let windowDeltaY=window.scrollY;
  for(let b=0;b<4;b++){
    if(b!=3 && windowDeltaY>deltaY[b]-1 && windowDeltaY<deltaY[b+1]){
      whiteLotus[b].style.filter="opacity(1)";
      blackLotus[b].style.filter="opacity(0)";
      parts[b].style.color="white";
      for(let c = 0;c<4;c++){
        if(c==b){
          continue;
        }
      whiteLotus[c].style.filter="opacity(0)";
      blackLotus[c].style.filter="opacity(0)";
      parts[c].style.color="#9c9c9c";
      }
    }
    if(b==3 && windowDeltaY>=deltaY[3]){
      whiteLotus[3].style.filter="opacity(1)";
      blackLotus[3].style.filter="opacity(0)";
      parts[3].style.color="white";
      for(let c = 0;c<3;c++){
      whiteLotus[c].style.filter="opacity(0)";
      blackLotus[c].style.filter="opacity(0)";
      parts[c].style.color="#9c9c9c";
      }
    }
  }
})

//箭头随着滚轮左移
let serviceArr=document.getElementsByClassName("service-arr")[0];
let arrLeftDistance=serviceArr.offsetLeft;
let newDistanceX=arrLeftDistance;
let newDistanceY=serviceArr.offsetTop;
window.addEventListener("scroll",function(){
  let windowDeltaY=window.scrollY;
  if(windowDeltaY >= deltaY[2] && windowDeltaY <= deltaY[3]){
    newDistanceX=arrLeftDistance+deltaY[2]-window.scrollY;
    newDistanceY=200-deltaY[2]+window.scrollY;
    if(newDistanceX<500){ 
      newDistanceX=500;
    }
    if(newDistanceX>arrLeftDistance){
      newDistanceX=arrLeftDistance;
    }
    if(newDistanceY>1900){
      newDistanceY=1900;
    }
    console.log(newDistanceX);
    console.log(newDistanceY);
    serviceArr.style.left=newDistanceX+"px";
    serviceArr.style.top=newDistanceY+"px";
  }
}
)


//个人信息下拉框
let selfInformation=document.getElementsByClassName("self-information");
let dropdown=document.getElementsByClassName("dropdown");
let arrs=document.getElementsByClassName("arr");
selfInformation[0].addEventListener("mouseover",function(){
  dropdown[0].style.transform="translate(1590px,75px)";
  arrs[0].style.rotate=90+"deg";
  this.style.height=60+"px";
})
selfInformation[0].addEventListener("mouseout",function(){
  arrs[0].style.rotate=0+"deg";
})
dropdown[0].addEventListener("mouseover",function(){
  this.style.transform="translate(1590px,75px)";
  arrs[0].style.rotate=90+"deg";

})
dropdown[0].addEventListener("mouseout",function(){
  this.style.transform="translate(1590px,-110px)";
  arrs[0].style.rotate=0+"deg";
})

