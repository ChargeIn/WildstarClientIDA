//----- (0000000140485CD0) ----------------------------------------------------
__int64 __fastcall sub_140485CD0(__int64 a1, __int128* a2)
{
	__int128 v2; // xmm0
	__int128 v3; // xmm1
	__int64 v4; // rcx
	__int128 v5; // xmm0
	__int128 v6; // xmm1
	__int128 v8[4]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v9; // [rsp+60h] [rbp-18h]

	v2 = *a2;
	v3 = a2[1];
	v4 = *(_QWORD*)(a1 + 48);
	v9 = 0i64;
	v8[0] = v2;
	v5 = a2[2];
	v8[1] = v3;
	v6 = a2[3];
	v8[2] = v5;
	v8[3] = v6;
	(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v4 + 320i64))(v4, v8);
	return 0i64;
}

