//----- (000000014088C080) ----------------------------------------------------
__int64 __fastcall sub_14088C080(__int64 a1, __int64 a2, float a3)
{
	__int128 v4; // [rsp+20h] [rbp-18h] BYREF

	*(_QWORD*)&v4 = a2;
	DWORD2(v4) = DWORD2(v4) & 0xFFFFFFFC | 2;
	return sub_140860000(a1 - 544, &v4, a3);
}

