//----- (00000001405E69E0) ----------------------------------------------------
void __fastcall sub_1405E69E0(_QWORD* a1)
{
	unsigned __int64 v2; // rbx
	__int64 v3; // r9
	__int64 v4; // rdx
	unsigned int v5; // r8d
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64* v9; // rax
	__int64 v10; // rax
	__int64 v11; // rcx
	unsigned int v12; // edx
	__int64 v13; // [rsp+50h] [rbp+8h] BYREF
	__int64 v14; // [rsp+58h] [rbp+10h] BYREF

	v2 = 0i64;
	if (a1[1])
	{
		v3 = qword_140C65B90;
		do
		{
			v4 = *(_QWORD*)(*a1 + 8 * v2);
			if (*(_DWORD*)(v4 + 12))
			{
				v5 = *(_DWORD*)(v4 + 8);
				v6 = *(_QWORD*)(v3 + 16);
				v7 = *(_QWORD*)(v6 + 8);
				v8 = v6;
				while (v7)
				{
					if (*(_DWORD*)(v7 + 32) < v5)
					{
						v7 = *(_QWORD*)(v7 + 24);
					}
					else
					{
						v8 = v7;
						v7 = *(_QWORD*)(v7 + 16);
					}
				}
				if (v8 == v6 || v5 < *(_DWORD*)(v8 + 32))
				{
					v14 = *(_QWORD*)(v3 + 16);
					v9 = &v14;
				}
				else
				{
					v13 = v8;
					v9 = &v13;
				}
				v10 = *v9;
				if (v10 != v6)
				{
					v11 = *(_QWORD*)(v10 + 40);
					if (v11)
					{
						v12 = *(_DWORD*)(v11 + 20);
						if (v12)
						{
							sub_140437A10((_QWORD*)qword_140C658D8, v12, 0, 0i64, 0, 0, 1);
							v3 = qword_140C65B90;
						}
					}
				}
			}
			++v2;
		} while (v2 < a1[1]);
	}
}
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65B90: using guessed type __int64 qword_140C65B90;

