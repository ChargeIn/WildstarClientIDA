//----- (00000001404CF4F0) ----------------------------------------------------
__int64 __fastcall sub_1404CF4F0(__int64 a1, __int64 a2, __int64 a3)
{
	int* v6; // rax
	_QWORD* v7; // rax
	_QWORD* v8; // rbx
	unsigned int** v9; // rax
	__int64 v10; // r8
	unsigned int v11; // edx
	__int64 v12; // rcx
	int* v13; // rax
	__int64 v14; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF
	int* v19; // [rsp+50h] [rbp+8h] BYREF
	int* v20; // [rsp+58h] [rbp+10h] BYREF

	v6 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a2 + 8) = v6;
	*(_QWORD*)(a2 + 16) = 0i64;
	*(_BYTE*)v6 = 0;
	*(_QWORD*)(*(_QWORD*)(a2 + 8) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 8) + 16i64) = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(*(_QWORD*)(a2 + 8) + 24i64) = *(_QWORD*)(a2 + 8);
	v7 = *(_QWORD**)(a1 + 16);
	v8 = (_QWORD*)v7[2];
	if (v8 != v7)
	{
		do
		{
			if ((unsigned int)sub_1403D7C30(v8[5], a3, 0))
			{
				v9 = (unsigned int**)v8[5];
				if (((*v9)[13] & 0x40) == 0)
				{
					v10 = *(_QWORD*)(a2 + 8);
					v11 = **v9;
					v12 = *(_QWORD*)(v10 + 8);
					v13 = (int*)v10;
					while (v12)
					{
						if (*(_DWORD*)(v12 + 32) < v11)
						{
							v12 = *(_QWORD*)(v12 + 24);
						}
						else
						{
							v13 = (int*)v12;
							v12 = *(_QWORD*)(v12 + 16);
						}
					}
					if (v13 == (int*)v10 || v11 < v13[8])
					{
						LODWORD(v18[0]) = v11;
						v18[1] = 0i64;
						v19 = v13;
						sub_140055C60(a2, &v20, (__int64*)&v19, v18);
						v13 = v20;
					}
					*((_QWORD*)v13 + 5) = v8[5];
				}
			}
			v14 = v8[3];
			if (v14)
			{
				v8 = (_QWORD*)v8[3];
				for (i = *(_QWORD**)(v14 + 16); i; i = (_QWORD*)i[2])
					v8 = i;
			}
			else
			{
				for (j = v8[1]; v8 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v8 = (_QWORD*)j;
				if (v8[3] != j)
					v8 = (_QWORD*)j;
			}
		} while (v8 != *(_QWORD**)(a1 + 16));
	}
	return a2;
}

