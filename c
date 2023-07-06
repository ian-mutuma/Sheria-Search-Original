[1mdiff --git a/index.html b/index.html[m
[1mindex d9551b6..56517e5 100644[m
[1m--- a/index.html[m
[1m+++ b/index.html[m
[36m@@ -168,30 +168,6 @@[m
       </div>[m
     </div>[m
 [m
[31m-    <script>[m
[31m-      let searchBarContainer = document.querySelector(".search-bar-container");[m
[31m-[m
[31m-      let inputBar = document.querySelector("input");[m
[31m-[m
[31m-      inputBar.onfocus = () => {[m
[31m-      inputBar.placeholder ="Type to search for case files using our AI";[m
[31m-      searchBarContainer.style.border = "none";[m
[31m-      searchBarContainer.style.boxShadow = "2px 2px 2px 3px rgb(118, 169, 211)";[m
[31m-    }[m
[31m-[m
[31m-      inputBar.addEventListener("focusout", ()=>{[m
[31m-        inputBar.placeholder ="Powering Precise Legal Insights.";[m
[31m-        searchBarContainer.style.border = "4px solid  rgb(23, 63, 29)";[m
[31m-        searchBarContainer.style.boxShadow = "none";[m
[31m-     [m
[31m-      })[m
[31m-[m
[31m-      searchBarContainer.addEventListener("click", ()=>{[m
[31m-        inputBar.focus();[m
[31m-      })[m
[31m-[m
[31m-[m
[31m-      [m
[31m-    </script>[m
[32m+[m[32m    <script src="script.js"></script>[m[41m[m
   </body>[m
 </html>[m
\ No newline at end of file[m
[1mdiff --git a/styles.css b/styles.css[m
[1mindex c6fe586..85ac30e 100644[m
[1m--- a/styles.css[m
[1m+++ b/styles.css[m
[36m@@ -4,7 +4,10 @@[m
 body{[m
   font-size: 16px;[m
   font-family: Viga, Arial, Helvetica, sans-serif;[m
[31m-  background: linear-gradient(to bottom right, rgb(186, 247, 255), rgb(215, 255, 213), lightblue);[m
[32m+[m[32m  background: linear-gradient(to bottom right, rgb(227, 252, 255), rgb(204, 199, 245), rgb(231, 249, 255));[m[41m[m
[32m+[m[32m  /* background-image: url("images/ai-law.webp");[m[41m[m
[32m+[m[32m  background-repeat: no-repeat;[m[41m[m
[32m+[m[32m  background-size:contain; */[m[41m[m
   padding: 0px 30px;[m
   overflow: auto;[m
 }[m
[36m@@ -33,16 +36,19 @@[m [ma:hover{[m
 /* *********************HEADER************************************************ */[m
 .header{[m
   display : flex;[m
[31m-  height: auto;[m
[32m+[m[32m  flex-wrap: wrap;[m[41m[m
[32m+[m[32m  padding-top: 30px;[m[41m[m
[32m+[m[32m  /* margin-bottom: 50px; */[m[41m[m
   font-size : 10px;[m
   align-items: center;[m
   justify-content: space-between;[m
[31m-  position: fixed;[m
[31m-  top: 0px;[m
[32m+[m[32m  /* position: fixed; */[m[41m[m
[32m+[m[32m  /* top: 0px;[m[41m[m
   left: 0px;[m
   right: 0px;[m
[31m-  z-index: 1;[m
[31m-  background: linear-gradient(to bottom right, rgb(186, 247, 255), rgb(215, 255, 213), lightblue);[m
[32m+[m[32m  z-index: 1; */[m[41m[m
[32m+[m[32m  /* background: linear-gradient(to bottom right, rgb(186, 247, 255), rgb(215, 255, 213), lightblue); */[m[41m[m
[32m+[m[32m  /* backdrop-filter: blur(100px); */[m[41m[m
   cursor: pointer;[m
 [m
  [m
[36m@@ -51,10 +57,10 @@[m [ma:hover{[m
 [m
 .left-header{[m
 [m
[31m-  display: flex;[m
[31m-  align-items: center;[m
[31m-  min-width: 330px;[m
[31m-  font-size: 39px;[m
[32m+[m[32m  /* display: flex; */[m[41m[m
[32m+[m[32m  text-align: center;[m[41m[m
[32m+[m[32m  min-width: 100%;[m[41m[m
[32m+[m[32m  font-size: 50px;[m[41m[m
   flex: 0 0;[m
   z-index: 1;[m
 }[m
[36m@@ -109,7 +115,7 @@[m [ma:hover{[m
 [m
   display: flex;[m
   justify-content: space-between;[m
[31m-  margin-top: 70px;[m
[32m+[m[32m  margin-top: 30px;[m[41m[m
 }[m
 [m
 .search-bar-container{[m
[36m@@ -117,8 +123,8 @@[m [ma:hover{[m
   display: flex;[m
   align-items:center;[m
   background-color:transparent;[m
[31m-  border: 4px solid  rgb(23, 63, 29);[m
[31m-  border-radius: 0px 20px;[m
[32m+[m[32m  border: 2px solid rgb(23, 63, 29);[m[41m[m
[32m+[m[32m  border-radius: 8px;[m[41m[m
   padding: 20px;[m
 }[m
 [m
[36m@@ -301,7 +307,7 @@[m [minput:focus{[m
   display: flex;[m
   justify-content: center;[m
   gap: 25px;[m
[31m-  margin-top: 30px;[m
[32m+[m[32m  margin: 60px 0px;[m[41m[m
   [m
 }[m
 [m
[36m@@ -362,6 +368,7 @@[m [minput:focus{[m
   padding: 10px 30px;[m
   border-radius: 10px 0px;[m
   cursor: pointer;[m
[32m+[m[32m  margin-bottom: 20px;[m[41m[m
 }[m
 [m
 .free-button:hover,[m
[36m@@ -445,16 +452,16 @@[m [minput:focus{[m
 }[m
 }[m
 [m
[31m-/* ******************media queries 800PX************************** */[m
[32m+[m[32m/* ******************media queries 865PX************************** */[m[41m[m
 [m
[31m-@media (max-width: 800px){[m
[32m+[m[32m@media (max-width: 865px){[m[41m[m
  [m
   .header{[m
     flex-direction: column;[m
     gap:10px;[m
[31m-    position: absolute;[m
[31m-    align-items: center;[m
[31m-    background-color: transparent;[m
[32m+[m[32m    /* position: absolute; */[m[41m[m
[32m+[m[32m    align-items: baseline;[m[41m[m
[32m+[m[32m    /* background-color: transparent; */[m[41m[m
     /* justify-content: flex-start; */[m
   }[m
 [m
[36m@@ -464,7 +471,7 @@[m [minput:focus{[m
   }[m
 [m
   .first-section{[m
[31m-    margin-top: 160px;[m
[32m+[m[32m    margin-top: 30px;[m[41m[m
   }[m
   .search-bar-container{[m
     [m
