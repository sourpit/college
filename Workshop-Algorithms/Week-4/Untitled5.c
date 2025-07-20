main()
{
    double duidSofia = 250.000, h1, h2, h3, hargatotal,diskon, bayar;

    /*
    sunscreen = 58.000;
    lipbalm = 25.000;
    handcream = 15.000;
    */

    h1=58.000 * 2;    // Suncreen
    h2=25.000 * 3;           // lipbalm
    h3=15.000;                 // handcream

    hargatotal=h1+h2+h3;
    diskon=hargatotal * 0.15;
    bayar=hargatotal - diskon;

    printf("Harga sunscreen :%.3f\n", h1);
    printf("Harga lipbalm :%.3f\n", h2);
    printf("Harga handcream :%.3f\n", h3);

    printf("Karena diskon harganya jadi: %.3f\n", diskon);
    printf("Harga total: %.3f\n", bayar);
    printf("Kembalian: %.3f\n", duidSofia - bayar);
}
