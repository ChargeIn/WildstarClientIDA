//----- (00000001405CFA90) ----------------------------------------------------
__int64 __fastcall sub_1405CFA90(__int64 a1)
{
	_QWORD** v1; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rcx
	__int64 result; // rax

	v1 = *(_QWORD***)(a1 + 8);
	v3 = *v1;
	if (*v1 != v1)
	{
		do
		{
			v4 = (__int64)v3;
			v3 = (_QWORD*)*v3;
			sub_14018B900(v4, 0);
		} while (v3 != *(_QWORD**)(a1 + 8));
	}
	**(_QWORD**)(a1 + 8) = *(_QWORD*)(a1 + 8);
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(result + 8) = result;
	return result;
}

