//----- (0000000140560AA0) ----------------------------------------------------
__int64 __fastcall sub_140560AA0(__int64 a1)
{
	__int64 v1; // rsi
	_QWORD* v2; // rbx
	int i; // edi
	__int64 v4; // rcx

	v1 = a1 - 8;
	v2 = (_QWORD*)(a1 + 32i64 * *(int*)(a1 - 8));
	for (i = *(_DWORD*)(a1 - 8) - 1; i >= 0; --i)
	{
		v4 = *(v2 - 2);
		v2 -= 4;
		if (v4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
		if (*v2)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v2 - 16i64) + 8i64))(*v2 - 16i64);
	}
	sub_14018B900(v1, 0);
	return v1;
}

