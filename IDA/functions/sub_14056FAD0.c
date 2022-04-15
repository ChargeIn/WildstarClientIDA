//----- (000000014056FAD0) ----------------------------------------------------
__int64 sub_14056FAD0()
{
	__int64 v0; // rsi
	_QWORD* v1; // rax
	_QWORD* v2; // rbx
	_QWORD* v3; // rdi
	__int64 v4; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v0 = *(_QWORD*)(qword_140C65970 + 88);
	if (v0)
	{
		v1 = *(_QWORD**)(v0 + 16);
		v2 = (_QWORD*)v1[2];
		if (v2 != v1)
		{
			do
			{
				v3 = (_QWORD*)v2[5];
				if ((*(unsigned int(__fastcall**)(_QWORD*))(*v3 + 40i64))(v3))
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PlayerPathMissionActivate", byte_1409ECCAC, v3[6]);
				v4 = v2[3];
				if (v4)
				{
					v2 = (_QWORD*)v2[3];
					for (i = *(_QWORD**)(v4 + 16); i; i = (_QWORD*)i[2])
						v2 = i;
				}
				else
				{
					for (j = v2[1]; v2 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v2 = (_QWORD*)j;
					if (v2[3] != j)
						v2 = (_QWORD*)j;
				}
			} while (v2 != *(_QWORD**)(v0 + 16));
		}
	}
	return sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PlayerPathRefresh", byte_1409D10FF);
}
// 1409D10FF: using guessed type _BYTE byte_1409D10FF[67];
// 1409ECCAC: using guessed type _BYTE byte_1409ECCAC[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

