//----- (000000014043BD20) ----------------------------------------------------
void __fastcall sub_14043BD20(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rax
	__int64 v4; // rcx
	int* v5; // rdi
	int v6; // edx
	int v7; // edx
	__int64 v8; // rbx
	int* v9; // rax
	int v10; // [rsp+20h] [rbp-28h] BYREF
	void* v11; // [rsp+28h] [rbp-20h]
	void(__fastcall * v12)(_DWORD*, _DWORD*); // [rsp+30h] [rbp-18h]
	__int64 v13; // [rsp+38h] [rbp-10h]

	if (a2)
	{
		v3 = *(_QWORD**)qword_140C7CD58;
		if (*(_QWORD*)qword_140C7CD58 == qword_140C7CD58)
		{
		LABEL_5:
			v5 = sub_14018B280(72i64, 0);
			if (v5)
			{
				*((_QWORD*)v5 + 2) = 0i64;
				*((_QWORD*)v5 + 3) = 0i64;
				*((_QWORD*)v5 + 5) = 0i64;
				*((_QWORD*)v5 + 6) = 0i64;
				*v5 = 1414420037;
				v5[17] = 0;
			}
			else
			{
				v5 = 0i64;
			}
			v7 = *(_DWORD*)(a2 + 8);
			v11 = &unk_140C7CC70;
			v10 = 1;
			v13 = a2;
			v12 = sub_14043C3F0;
			sub_140195960((__int64)v5, v7, (__int64)&v10, 4);
			v8 = qword_140C7CD58;
			v9 = sub_14018B280(24i64, 0);
			if (v9 != (int*)-16i64)
				*((_QWORD*)v9 + 2) = v5;
			*(_QWORD*)v9 = v8;
			*((_QWORD*)v9 + 1) = *(_QWORD*)(v8 + 8);
			**(_QWORD**)(v8 + 8) = v9;
			*(_QWORD*)(v8 + 8) = v9;
		}
		else
		{
			while (1)
			{
				v4 = v3[2];
				if (!*(_QWORD*)(v4 + 16))
					break;
				v3 = (_QWORD*)*v3;
				if (v3 == (_QWORD*)qword_140C7CD58)
					goto LABEL_5;
			}
			v13 = a2;
			v6 = *(_DWORD*)(a2 + 8);
			v11 = &unk_140C7CC70;
			v10 = 1;
			v12 = sub_14043C3F0;
			sub_140195960(v4, v6, (__int64)&v10, 4);
		}
	}
}
// 140C7CD58: using guessed type __int64 qword_140C7CD58;

