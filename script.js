let searchBarContainer = document.querySelector(".search-bar-container");

let inputBar = document.querySelector("input");

inputBar.onfocus = () => {
inputBar.placeholder ="Type to search for case files using our AI";
searchBarContainer.style.border = "none";
searchBarContainer.style.boxShadow = "2px 2px 2px 3px rgb(118, 169, 211)";
}

inputBar.addEventListener("focusout", ()=>{
  inputBar.placeholder ="Powering Precise Legal Insights.";
  searchBarContainer.style.border = "2px solid rgb(23, 63, 29)";
  searchBarContainer.style.boxShadow = "none";

})

searchBarContainer.addEventListener("click", ()=>{
  inputBar.focus();
})
