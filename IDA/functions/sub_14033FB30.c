//----- (000000014033FB30) ----------------------------------------------------
__int64 __fastcall sub_14033FB30(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	_QWORD* v4; // rcx
	_QWORD* v5; // rbx
	_QWORD* v6; // rdx
	__int64 v7; // rdx

	result = 2147500037i64;
	v4 = *(_QWORD**)(qword_140C65850 + 112);
	if (v4)
	{
		do
		{
			v5 = (_QWORD*)v4[3];
			if (v4[1] == a2)
			{
				v6 = (_QWORD*)v4[2];
				if (v6)
					*v6 = v5;
				v7 = v4[3];
				if (v7)
					*(_QWORD*)(v7 + 16) = v4[2];
				v4[2] = 0i64;
				v4[3] = 0i64;
				sub_14018B900((__int64)v4, 0);
				result = 0i64;
			}
			v4 = v5;
		} while (v5);
	}
	return result;
}
// 140C65850: using guessed type __int64 qword_140C65850;

