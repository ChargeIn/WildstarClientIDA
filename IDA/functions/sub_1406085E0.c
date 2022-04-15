//----- (00000001406085E0) ----------------------------------------------------
__int64 __fastcall sub_1406085E0(__int64 a1)
{
	__int64 result; // rax
	unsigned int v3; // ebx
	int* v4; // rax
	__int64 v5; // rcx
	__int64* v6; // r8
	__int64 v7; // rax

	result = sub_1402EC590(a1, (__int64*)(a1 + 80));
	v3 = result;
	if ((int)result >= 0)
	{
		v4 = sub_14018B280(448i64, 0);
		if (v4)
			v5 = sub_140609470((__int64)v4, a1, *(_QWORD*)(a1 + 80));
		else
			v5 = 0i64;
		v6 = (__int64*)(a1 + 112);
		if (!*(_QWORD*)(v5 + 432))
		{
			*(_QWORD*)(v5 + 432) = v6;
			*(_QWORD*)(v5 + 440) = *v6;
			*v6 = v5;
			v7 = *(_QWORD*)(v5 + 440);
			if (v7)
				*(_QWORD*)(v7 + 432) = v5 + 440;
		}
		return v3;
	}
	return result;
}

