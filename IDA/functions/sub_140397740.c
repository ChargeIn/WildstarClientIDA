//----- (0000000140397740) ----------------------------------------------------
__int64 __fastcall sub_140397740(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	__int64 v4; // rbp
	__int64 v5; // rax
	unsigned int* v6; // rdx
	bool v7; // zf
	unsigned int v8; // eax
	__int64 v9; // rax
	__int64 v10; // rcx
	int v11; // [rsp+30h] [rbp+8h] BYREF
	int v12; // [rsp+34h] [rbp+Ch]

	result = *(_QWORD*)(a1 + 120);
	if (result)
	{
		result = sub_1401F31E0(*(_DWORD*)(result + 220));
		v3 = result;
		if (result)
		{
			v4 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(result + 68), *(_QWORD*)(a1 + 120));
			if (!v4 || *(_DWORD*)(a1 + 5272) != 9)
				return 0i64;
			v12 = 16;
			v11 = 0;
			v5 = sub_1403AC780(a1 + 160, &v11);
			v6 = *(unsigned int**)(v4 + 112);
			v7 = v5 == 0;
			v8 = v6[61];
			if (v8)
			{
				if (v8 - 1 <= 1)
				{
					v9 = *(_QWORD*)(a1 + 120);
					if (*(_QWORD*)(v9 + 776) || *(_QWORD*)(v9 + 1112))
						return *(unsigned int*)(v3 + 76);
				}
			}
			else
			{
				v10 = *(_QWORD*)(a1 + 120);
				if (*(_QWORD*)(v10 + 792) || *(_QWORD*)(v10 + 1112))
					return *(unsigned int*)(v3 + 76);
			}
			if (v7)
				return *(unsigned int*)(v3 + 76);
			return *v6;
		}
	}
	return result;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

