//----- (0000000140452580) ----------------------------------------------------
_QWORD* sub_140452580()
{
	__int64 v0; // r8
	_QWORD* result; // rax
	_QWORD* v2; // rcx
	_QWORD* v3; // rdx
	_QWORD* v4; // rax
	__int64 v5; // rdx
	_QWORD* i; // rdx
	__int64 j; // rdx
	__int64 v8; // rax

	v0 = qword_140C65910;
	result = *(_QWORD**)(qword_140C65910 + 8);
	v2 = (_QWORD*)result[2];
	if (v2 != result)
	{
		do
		{
			v3 = (_QWORD*)v2[6];
			v4 = (_QWORD*)v3[2];
			if (v4 != v3)
			{
				do
				{
					v4[5] = 0i64;
					v5 = v4[3];
					if (v5)
					{
						v4 = (_QWORD*)v4[3];
						for (i = *(_QWORD**)(v5 + 16); i; i = (_QWORD*)i[2])
							v4 = i;
					}
					else
					{
						for (j = v4[1]; v4 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
							v4 = (_QWORD*)j;
						if (v4[3] != j)
							v4 = (_QWORD*)j;
					}
				} while (v4 != (_QWORD*)v2[6]);
			}
			v8 = v2[3];
			if (v8)
			{
				v2 = (_QWORD*)v2[3];
				for (result = *(_QWORD**)(v8 + 16); result; result = (_QWORD*)result[2])
					v2 = result;
			}
			else
			{
				for (result = (_QWORD*)v2[1]; v2 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v2 = result;
				if ((_QWORD*)v2[3] != result)
					v2 = result;
			}
		} while (v2 != *(_QWORD**)(v0 + 8));
	}
	return result;
}
// 140C65910: using guessed type __int64 qword_140C65910;

