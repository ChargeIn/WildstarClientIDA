//----- (0000000140402BA0) ----------------------------------------------------
__int64 __fastcall sub_140402BA0(__int64 a1)
{
	_QWORD* v2; // rcx
	int* v3; // rax
	int* v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rcx
	__int64 v7; // rax
	int v8; // eax

	v2 = (_QWORD*)(a1 + 16);
	*(v2 - 1) = 0i64;
	*(v2 - 2) = 0i64;
	sub_1402C8DB0(v2);
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	v3 = sub_14018B280(8i64, 0);
	*(_QWORD*)(a1 + 104) = v3;
	*(_QWORD*)(a1 + 112) = v3;
	*(_QWORD*)(a1 + 120) = v3 + 2;
	if (v3)
		*(_BYTE*)v3 = 0;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_DWORD*)(a1 + 128) = 1414420037;
	*(_DWORD*)(a1 + 196) = 0;
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	v4 = sub_14018B280(704i64, 0);
	if (v4)
		v5 = sub_1406456E0((__int64)v4);
	else
		v5 = 0i64;
	v6 = *(_QWORD*)(a1 + 208);
	if (v6 != v5)
	{
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 208) = v5;
	}
	*(_DWORD*)(a1 + 224) = 0;
	v7 = sub_140200220(0x459u);
	if (v7)
		v8 = *(_DWORD*)(v7 + 8);
	else
		v8 = 512;
	*(_QWORD*)(a1 + 216) = v8;
	sub_14040B200((__int64*)(a1 + 232), v8);
	return a1;
}

