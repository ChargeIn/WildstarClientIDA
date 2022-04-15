//----- (0000000140308800) ----------------------------------------------------
void __fastcall sub_140308800(__int64 a1, __int64* a2, int* a3)
{
	__int64 v4; // rcx
	int v7; // eax
	__int64* v8; // [rsp+20h] [rbp-18h] BYREF
	int v9; // [rsp+28h] [rbp-10h]

	v4 = *a2;
	if (!*a2)
	{
		*a2 = a1;
		v7 = *a3;
		v8 = a2;
	LABEL_7:
		v9 = v7;
		a2[1] = sub_14030A7C0((__int64*)(a1 + 8), (__int64)&v8);
		sub_14030A510(a1, (__int64)a2);
		return;
	}
	if (v4 != a1)
	{
		sub_1403088B0(v4, a2);
		*a2 = a1;
		v7 = *a3;
		v8 = a2;
		goto LABEL_7;
	}
	*(_DWORD*)(*(_QWORD*)(a1 + 8) + 16 * a2[1] + 8) = *a3;
	if (!(unsigned int)sub_14030A510(a1, (__int64)a2))
		sub_14030A5F0(a1, (__int64)a2);
}

