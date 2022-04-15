//----- (00000001405258E0) ----------------------------------------------------
__int64 __fastcall sub_1405258E0(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	int* v5; // rdi
	_DWORD* v6; // rbx
	int v8; // ecx
	int v9; // eax

	v5 = a3;
	v6 = (_DWORD*)a1;
	if (*(char*)(a1 + 28) >= 0 || a2)
		return sub_1400D2120(a1, a2, a3, a4);
	if (sub_1405257A0(a1) < 1.0)
	{
		a3 = v5;
		a2 = 0;
		a1 = (__int64)v6;
		return sub_1400D2120(a1, a2, a3, a4);
	}
	v8 = *v5;
	v6[226] = *v5;
	v6[227] = v5[1];
	v6[216] = v8;
	v6[217] = v6[227];
	v9 = sub_14018CDF0();
	v6[233] = v9;
	v6[228] = v9;
	return (unsigned int)sub_1400C3D70((__int64)(v6 + 256), v5) == 9;
}

