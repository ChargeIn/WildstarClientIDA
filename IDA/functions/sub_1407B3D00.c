//----- (00000001407B3D00) ----------------------------------------------------
__int64 __fastcall sub_1407B3D00(__int64 a1, __int64 a2)
{
	int v3; // eax
	int* v4; // rbx
	unsigned int v5; // edi
	int* v7; // [rsp+40h] [rbp+18h] BYREF

	v7 = 0i64;
	v3 = sub_1407B23F0(a2, &v7);
	v4 = v7;
	v5 = v3;
	if (v3 >= 0)
		v5 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 432i64))(a1, v7);
	if (v4)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v4 + 8i64))(v4);
	return v5;
}

