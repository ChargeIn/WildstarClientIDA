//----- (0000000140269730) ----------------------------------------------------
__int64 __fastcall sub_140269730(int* a1)
{
	unsigned int v2; // r10d
	unsigned int* v3; // rdx
	__int64 v4; // r11
	__int64 v5; // rax
	unsigned int v6; // r8d
	unsigned int v7; // r9d

	sub_1407E4830(a1 + 1561, 0i64, 0x130ui64);
	v2 = a1[1608];
	a1[1564] = 1610612736;
	a1[1566] = 0x80000000;
	a1[1567] = 1;
	a1[1568] = 0x100000;
	a1[1569] = 674032;
	a1[1570] = 33554448;
	a1[1571] = 255;
	a1[1572] = 1023;
	a1[1573] = 1023;
	a1[1574] = 255;
	a1[1576] = 124932;
	a1[1577] = 50529024;
	a1[1578] = 50529024;
	a1[1579] = 50529024;
	a1[1580] = 31;
	a1[1581] = 31;
	a1[1595] = 511;
	a1[1614] = 17;
	a1[1620] = 768;
	a1[1622] = 50332416;
	a1[1583] = 1024;
	a1[1584] = 1024;
	a1[1585] = 32;
	a1[1610] = -130304;
	a1[1611] = 256;
	a1[1612] = -64768;
	a1[1621] = 4;
	v3 = (unsigned int*)(a1 + 296);
	v4 = 23i64;
	do
	{
		if (v2 < *v3)
		{
			v2 = *v3;
			a1[1608] = *v3;
		}
		v5 = 0i64;
		if (*v3)
		{
			v6 = a1[1609];
			do
			{
				v7 = v3[v5 + 1];
				if (v6 < v7)
				{
					v6 = v3[v5 + 1];
					a1[1609] = v7;
				}
				v5 = (unsigned int)(v5 + 1);
			} while ((unsigned int)v5 < *v3);
		}
		v3 += 54;
		--v4;
	} while (v4);
	return 0i64;
}

