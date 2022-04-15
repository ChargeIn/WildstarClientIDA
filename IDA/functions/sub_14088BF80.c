//----- (000000014088BF80) ----------------------------------------------------
char __fastcall sub_14088BF80(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
	bool v4; // zf
	__int64 v6; // [rsp+30h] [rbp+8h] BYREF

	if (a2 < *(_DWORD*)(a1 + 24) && a2 != -1)
		*(_DWORD*)(a1 + 24) = a2;
	v4 = *(_DWORD*)(a1 + 24) == -1;
	LODWORD(v6) = 0;
	if (v4 || (*(_BYTE*)(a1 + 40) & 2) != 0)
		LOBYTE(a3) = 1;
	else
		a3 = 0i64;
	return sub_140860EA0(a1 - 544, &v6, a3, a4);
}

