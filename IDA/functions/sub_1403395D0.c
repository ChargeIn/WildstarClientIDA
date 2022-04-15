//----- (00000001403395D0) ----------------------------------------------------
__int64 __fastcall sub_1403395D0(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rbx
	int* v4; // rdi
	void(__fastcall * **v5)(_QWORD); // rcx

	v2 = *(_QWORD*)(a1 + 32);
	v4 = sub_14018B280(24i64, 0);
	if (v4 != (int*)-16i64)
	{
		v5 = (void(__fastcall***)(_QWORD)) * a2;
		*((_QWORD*)v4 + 2) = *a2;
		if (v5)
			(**v5)(v5);
	}
	*(_QWORD*)v4 = v2;
	*((_QWORD*)v4 + 1) = *(_QWORD*)(v2 + 8);
	**(_QWORD**)(v2 + 8) = v4;
	*(_QWORD*)(v2 + 8) = v4;
	if (*a2)
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a2 + 8i64))(*a2);
	return 0i64;
}

