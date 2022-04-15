//----- (00000001404C2FD0) ----------------------------------------------------
__int64 __fastcall sub_1404C2FD0(_QWORD* a1, __int64 a2)
{
	__int64 v3; // rcx
	__int128* v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // ebx
	__int128 v9[4]; // [rsp+20h] [rbp-48h] BYREF

	v3 = a1[76];
	if (!v3)
		return 0i64;
	v6 = (__int128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 80i64))(v3);
	v7 = a1[76];
	v9[0] = *v6;
	v9[1] = v6[1];
	v9[2] = v6[2];
	v9[3] = v6[3];
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 72i64))(v7, a2);
	v8 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 288i64))(a1);
	(*(void(__fastcall**)(_QWORD, __int128*))(*(_QWORD*)a1[76] + 72i64))(a1[76], v9);
	return v8;
}

