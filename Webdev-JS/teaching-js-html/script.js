// DOM HTML Element
// Nangkep element Html
// $('symbol-identifier identifier')
// Symbol : ID -> #
// Class : .
// DOM Berdasarkan Atribut
// $('[namaAtribut = valueAtribut ]')
// Event :Click,Hover,Change,Focus
// DOM.event
// Method JQuery : Show, Hide, Append, HTML, Ajax, add, remove, val, attr, (FadeIn, FadeOut) -> Show dengan Gaya
$('#show').click(
    function(){
        $('#notifikasi').fadeIn()
        // Show = FadeIn
        // Show != Add / Append
    }
)
$('#hide').click(
    function(){
        $('#notifikasi').fadeOut()
        // hide = FadeOut
        // hide != Remove

    }
)
// dateTime
// interval function
// async function
$('#kirim-nama').click(function(){
    const nama = $('[name=nama]').val()
    if(nama == '' || nama == null || nama == ""){
        alert("Nama tidak boleh kosong")
    }else{
        $('#list-nama').append('<li>'+nama + '</li>')
    }
})

$('#on-sl').click(function(){
    $('#sarang-lampu').html('<div class="lampu-hidup-sl"></div>')
})
$('#off-sl').click(function(){
    $('#sarang-lampu').html('<div class="lampu"></div>')
})

$('#on').click(function(){
    $('#lampu-1').attr('class','lampu lampu-hidup')
})
$('#off').click(function(){
    $('#lampu-1').attr('class','lampu')
})

$('#reset').click(function(){
    $('#data-kelas').val('Kelas A')
})

$('#clear').click(function(){
    $('#data-kelas').val('')
})