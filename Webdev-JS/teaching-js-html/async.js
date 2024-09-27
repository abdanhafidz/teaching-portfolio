// Synchronous dan Async
async function penjumlahan(a,b){
    return a + b;
}
async function pengurangan(a,b){
    return a - b;
}
async function loop(a,b){
    var res = 0
    for(var i = a; i<=b ;i++){
        res += i
    }
    return res
}

async function jalanin(){
    z = await loop(1,1000)
    y = await penjumlahan(1,4)
    hasil = z + y
    console.log(hasil)
    x = await pengurangan(5,3)
    console.log(x)
}
jalanin()