// const p1= Promise.reject("p1");
// const p2= Promise.reject("p2");
// const p3= Promise.resolve("p3");

//  Promise.all([p1,p2,p3]).then(res=>console.log(res)).catch(err=>console.log(err)); //Runs multiple promises in parallel and returns results only if all succeed.

//  Promise.race([p1,p2,p3]).then(res=>console.log(res)).catch(err=>console.log(err)); // return fist promise who win either resolve of reject

//  Promise.allSettled([p1,p2,p3]).then(res=>console.log(res)).catch(err=>console.log(err)); //Returns results of all promises regardless of success or failure.

//  Promise.any([p1,p2,p3]).then(res=>console.log(res)).catch(err=>console.log(err)); //Returns the first fulfilled promise. Ignores rejected promises unless all fail.

 const print =() =>{
    a=10;
   
    return (b)=>{console.log(a+b)};
 }


const x=print();
 
x(10);
x(20);
