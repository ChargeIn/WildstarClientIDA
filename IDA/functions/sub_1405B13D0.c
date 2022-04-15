//----- (00000001405B13D0) ----------------------------------------------------
void __fastcall sub_1405B13D0(__int64 a1, unsigned int a2, int* a3)
{
	__int64 v3; // rdi
	__int64* v6; // rbx
	unsigned __int64 v7; // rdx
	__int64 v8; // rax
	__int64* v9; // r8
	__int64* v10; // rcx
	int* v11; // rbx
	unsigned int v12; // [rsp+20h] [rbp-18h] BYREF
	__int64 v13; // [rsp+28h] [rbp-10h]

	v3 = qword_140C65898;
	v6 = *(__int64**)(*(_QWORD*)(qword_140C65898 + 30048)
		+ 8
		* (a2
			% (unsigned __int64)((__int64)(*(_QWORD*)(qword_140C65898 + 30056)
				- *(_QWORD*)(qword_140C65898 + 30048)) >> 3)));
	if (v6)
	{
		do
		{
			if (*((_DWORD*)v6 + 2) == a2)
				break;
			v6 = (__int64*)*v6;
		} while (v6);
		if (v6)
		{
			sub_14018B900(v6[2], 0);
			v3 = qword_140C65898;
			v7 = *((unsigned int*)v6 + 2)
				% (unsigned __int64)((__int64)(*(_QWORD*)(qword_140C65898 + 30056) - *(_QWORD*)(qword_140C65898 + 30048)) >> 3);
			v8 = *(_QWORD*)(qword_140C65898 + 30048);
			v9 = *(__int64**)(v8 + 8 * v7);
			if (v9 == v6)
			{
				*(_QWORD*)(v8 + 8 * v7) = *v9;
				v10 = v9;
			}
			else
			{
				v10 = (__int64*)*v9;
				if (!*v9)
					goto LABEL_13;
				while (v10 != v6)
				{
					v9 = v10;
					v10 = (__int64*)*v10;
					if (!v10)
						goto LABEL_13;
				}
				*v9 = *v10;
			}
			sub_14018B900((__int64)v10, 0);
			--* (_QWORD*)(v3 + 30072);
			v3 = qword_140C65898;
		}
	}
LABEL_13:
	*(_DWORD*)(v3 + 30080) = 1;
	if (a3)
	{
		v12 = a2;
		v13 = 0i64;
		v11 = sub_1404BC890((_QWORD*)(v3 + 30032), &v12);
		*((_QWORD*)v11 + 1) = sub_14018E9C0(a3);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

