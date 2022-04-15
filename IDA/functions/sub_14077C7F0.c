//----- (000000014077C7F0) ----------------------------------------------------
__int64 __fastcall sub_14077C7F0(__int64 a1)
{
	unsigned __int64 v1; // rbx
	unsigned __int64 v3; // rsi
	int v4; // eax
	__int64 v5; // rcx
	int v6; // edx
	__int64 v7; // r8

	v1 = 0i64;
	**(_QWORD**)a1 = 0i64;
	v3 = *(_QWORD*)(*(_QWORD*)a1 + 16i64);
	if (v3)
	{
		do
		{
			v4 = (*(__int64(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890);
			++v1;
			v5 = *(_QWORD*)(*(_QWORD*)a1 + 8i64);
			v6 = *(_DWORD*)(v5 + 4 * v1 - 4);
			v7 = (unsigned int)(int)((double)v4 * 2.328306436538696e-10 * ((double)((int)v3 - 1) + 1.0));
			*(_DWORD*)(v5 + 4 * v1 - 4) = *(_DWORD*)(v5 + 4 * v7);
			*(_DWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 8i64) + 4 * v7) = v6;
		} while (v1 < v3);
	}
	return 1i64;
}
// 140C77890: using guessed type __int64 qword_140C77890;

