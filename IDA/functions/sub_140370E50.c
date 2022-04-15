//----- (0000000140370E50) ----------------------------------------------------
__int64 __fastcall sub_140370E50(__int64 a1, _QWORD* a2, __int64 a3)
{
	_QWORD* v3; // rbx
	int v7[2]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v8; // [rsp+28h] [rbp-30h]
	__int64(__fastcall * v9)(__int64**); // [rsp+30h] [rbp-28h]
	__int64 v10; // [rsp+38h] [rbp-20h]
	int v11; // [rsp+40h] [rbp-18h]

	v3 = (_QWORD*)(a1 + 24);
	*(_QWORD*)a1 = a2[1];
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(a3 + 8);
	*(_QWORD*)(a1 + 16) = a2[2];
	v8 = a1;
	v9 = sub_140370E20;
	v7[0] = 4;
	v7[1] = 1;
	v10 = 0i64;
	v11 = 1;
	sub_14019DCA0((__int64)v7, 1, 0i64, (int**)(a1 + 24));
	(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v3 + 72i64))(*v3, a2[3]);
	(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v3 + 72i64))(*v3, *(_QWORD*)(a3 + 24));
	return (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 88i64))(*v3);
}

