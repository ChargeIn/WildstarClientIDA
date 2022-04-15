//----- (000000014071FF40) ----------------------------------------------------
int* __fastcall sub_14071FF40(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rax
	int* v4; // rbx
	unsigned int v5; // r8d
	unsigned int v6; // ecx
	unsigned int v7; // ecx
	int* v8; // rsi
	int* v9; // rax
	__int64 v10; // rcx
	int* v11; // r8
	int* v12; // r14
	int* v13; // rdi
	__int64 v14; // rcx
	int* v15; // rdi
	__int64 v16; // rcx
	__int64 v18; // [rsp+30h] [rbp-38h] BYREF
	int* v19; // [rsp+40h] [rbp-28h]
	__int64 v20; // [rsp+70h] [rbp+8h] BYREF
	int* v21; // [rsp+80h] [rbp+18h] BYREF

	v20 = a1;
	v3 = *(_QWORD*)(qword_140C7F0F0 + 8);
	v4 = (int*)qword_140C7F0F0;
	if (v3)
	{
		v5 = *a2;
		do
		{
			v6 = *(_DWORD*)(v3 + 32);
			if (v6 < v5 || v5 >= v6 && *(_DWORD*)(v3 + 36) < a2[1])
			{
				v3 = *(_QWORD*)(v3 + 24);
			}
			else
			{
				v4 = (int*)v3;
				v3 = *(_QWORD*)(v3 + 16);
			}
		} while (v3);
	}
	if (v4 == (int*)qword_140C7F0F0 || (v7 = v4[8], *a2 < v7) || v7 >= *a2 && a2[1] < v4[9])
	{
		v8 = sub_14018B280(24i64, 0);
		*(_QWORD*)v8 = v8;
		*((_QWORD*)v8 + 1) = v8;
		v18 = *(_QWORD*)a2;
		v9 = sub_14018B280(24i64, 0);
		*(_QWORD*)v9 = v9;
		*((_QWORD*)v9 + 1) = v9;
		v10 = *(_QWORD*)v9;
		v11 = *(int**)v8;
		v19 = v9;
		v20 = v10;
		sub_14001FDD0(v10, &v20, v11, v8);
		v20 = (__int64)v4;
		sub_1407200B0((__int64)&unk_140C7F0E8, &v21, &v20, (unsigned int*)&v18);
		v12 = v19;
		v4 = v21;
		v13 = *(int**)v19;
		while (v13 != v12)
		{
			v14 = (__int64)v13;
			v13 = *(int**)v13;
			sub_14018B900(v14, 0);
		}
		*(_QWORD*)v12 = v12;
		*((_QWORD*)v12 + 1) = v12;
		sub_14018B900((__int64)v12, 0);
		v15 = *(int**)v8;
		while (v15 != v8)
		{
			v16 = (__int64)v15;
			v15 = *(int**)v15;
			sub_14018B900(v16, 0);
		}
		*(_QWORD*)v8 = v8;
		*((_QWORD*)v8 + 1) = v8;
		sub_14018B900((__int64)v8, 0);
	}
	return v4 + 10;
}
// 140C7F0F0: using guessed type __int64 qword_140C7F0F0;

