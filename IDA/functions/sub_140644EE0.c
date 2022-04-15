//----- (0000000140644EE0) ----------------------------------------------------
void __fastcall sub_140644EE0(__int64 a1, unsigned int a2, __int64* a3)
{
	__int64 v3; // rdi
	__int64 i; // rbx
	__int64 v6; // rax
	unsigned int v7; // r8d
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64* v10; // rdx
	__int64 v11; // rdx
	__int64 v12; // [rsp+30h] [rbp+8h] BYREF
	__int64 v13; // [rsp+48h] [rbp+20h] BYREF

	v12 = a1;
	v3 = qword_140C65C28;
	for (i = sub_14043ED60(a1, a2); i; i = *(_QWORD*)(i + 16))
	{
		v6 = *(_QWORD*)(v3 + 280);
		v7 = **(_DWORD**)(i + 8);
		v8 = *(_QWORD*)(v6 + 8);
		v9 = v6;
		while (v8)
		{
			if (*(_DWORD*)(v8 + 32) < v7)
			{
				v8 = *(_QWORD*)(v8 + 24);
			}
			else
			{
				v9 = v8;
				v8 = *(_QWORD*)(v8 + 16);
			}
		}
		if (v9 == v6 || v7 < *(_DWORD*)(v9 + 32))
		{
			v13 = *(_QWORD*)(v3 + 280);
			v10 = &v13;
		}
		else
		{
			v12 = v9;
			v10 = &v12;
		}
		v11 = *v10;
		if (v11 != v6)
			sub_1400291A0(a3, *(int**)(v11 + 40), *(_QWORD*)(v11 + 48));
	}
	sub_1403D2B70(a3);
}
// 140C65C28: using guessed type __int64 qword_140C65C28;

