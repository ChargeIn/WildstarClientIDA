//----- (0000000140611130) ----------------------------------------------------
__int64 __fastcall sub_140611130(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	int* v5; // rax

	v2 = *(_QWORD*)(a1 + 16);
	v5 = sub_14018B280(24i64, 0);
	if (v5 != (int*)-16i64)
		*((_QWORD*)v5 + 2) = a2;
	*(_QWORD*)v5 = v2;
	*((_QWORD*)v5 + 1) = *(_QWORD*)(v2 + 8);
	**(_QWORD**)(v2 + 8) = v5;
	*(_QWORD*)(v2 + 8) = v5;
	return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 16i64))(a2, a1);
}

