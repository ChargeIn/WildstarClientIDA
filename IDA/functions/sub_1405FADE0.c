//----- (00000001405FADE0) ----------------------------------------------------
_QWORD* __fastcall sub_1405FADE0(__int64 a1, int a2)
{
	_QWORD* v2; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* result; // rax
	_QWORD* v10; // rbx
	__int64 v11; // rax

	v2 = *(_QWORD**)(a1 + 24);
	v5 = (_QWORD*)v2[2];
	if (v5 != v2)
	{
		do
		{
			sub_1405FAF00(a1, a2, (__int64)(v5 + 5), v5[5]);
			v6 = v5[3];
			if (v6)
			{
				v5 = (_QWORD*)v5[3];
				for (i = *(_QWORD**)(v6 + 16); i; i = (_QWORD*)i[2])
					v5 = i;
			}
			else
			{
				for (j = v5[1]; v5 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v5 = (_QWORD*)j;
				if (v5[3] != j)
					v5 = (_QWORD*)j;
			}
		} while (v5 != *(_QWORD**)(a1 + 24));
	}
	result = *(_QWORD**)(a1 + 56);
	v10 = (_QWORD*)result[2];
	if (v10 != result)
	{
		do
		{
			sub_1405FAF00(a1, a2, (__int64)(v10 + 5), v10[5]);
			v11 = v10[3];
			if (v11)
			{
				v10 = (_QWORD*)v10[3];
				for (result = *(_QWORD**)(v11 + 16); result; result = (_QWORD*)result[2])
					v10 = result;
			}
			else
			{
				for (result = (_QWORD*)v10[1]; v10 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v10 = result;
				if ((_QWORD*)v10[3] != result)
					v10 = result;
			}
		} while (v10 != *(_QWORD**)(a1 + 56));
	}
	return result;
}

