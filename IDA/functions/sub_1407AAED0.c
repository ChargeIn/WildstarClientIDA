//----- (00000001407AAED0) ----------------------------------------------------
__int64 __fastcall sub_1407AAED0(__int64* a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5, int a6)
{
	__int64 v9; // rax
	__int64 v10; // r10
	__int64 v11; // rdx
	__int128 v12; // xmm0
	__int64 v13; // xmm1_8
	__int128 v15; // [rsp+30h] [rbp-28h] BYREF
	__int64 v16; // [rsp+40h] [rbp-18h]
	int v17; // [rsp+48h] [rbp-10h]

	v9 = (*(__int64(__fastcall**)(__int64*, __int64, _QWORD))(*a1 + 336))(a1, a2, 0i64);
	v10 = *a1;
	v11 = 28i64 * a3;
	v12 = *(_OWORD*)(v11 + v9 + 156);
	v13 = *(_QWORD*)(v11 + v9 + 172);
	v17 = *(_DWORD*)(v11 + v9 + 180);
	v15 = v12;
	v16 = v13;
	return (*(__int64(__fastcall**)(__int64*, __int128*, __int64, _QWORD, int))(v10 + 248))(a1, &v15, a4, a5, a6);
}

