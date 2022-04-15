//----- (00000001403D19A0) ----------------------------------------------------
void sub_1403D19A0()
{
	__int64 v0; // rsi
	__int64 v1; // rdi
	unsigned __int64 v2; // r14
	int* v3; // rax
	__int64 v4; // rbx
	unsigned __int64 v5; // r15
	__int64 v6; // r12
	int* v7; // rbp
	int* v8; // rdi
	__int64 v9[2]; // [rsp+20h] [rbp-28h] BYREF

	v0 = qword_140C65898;
	if (*(_QWORD*)(qword_140C65898 + 28344))
	{
		v1 = 2 * (*(unsigned int*)(qword_140C65898 + 28140) + 1767i64);
		v2 = *(_QWORD*)(qword_140C65898 + 16 * (*(unsigned int*)(qword_140C65898 + 28140) + 1767i64) + 8);
		if (v2)
		{
			v3 = sub_14018B280(2 * v2 + 16, 0);
			if (v3)
			{
				*((_QWORD*)v3 + 1) = v2;
				v4 = (__int64)(v3 + 4);
				*(_QWORD*)v3 = off_140B55060;
			}
			else
			{
				v4 = 16i64;
			}
		}
		else
		{
			v4 = 0i64;
		}
		v5 = 2 * v2;
		sub_1407DB590((int*)v4, *(int**)(v0 + 8 * v1), 2 * v2);
		v6 = *(_QWORD*)(v0 + 28344);
		v7 = *(int**)(v0 + 28336);
		if (v6)
		{
			v2 += v6;
			v8 = sub_14018DB00(v4, v2, 2i64);
			sub_1407DB590((int*)((char*)v8 + v5), v7, 2 * v6);
			if ((int*)v4 != v8)
			{
				sub_1407DB590(v8, (int*)v4, v5);
				if (v4)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
				v4 = (__int64)v8;
			}
		}
		v9[0] = (unsigned __int8)v2;
		v9[1] = v4;
		sub_1403F4900(qword_140C65898, 0x1A2u, (__int64)v9);
		*(_QWORD*)(v0 + 28344) = 0i64;
		if (v4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

