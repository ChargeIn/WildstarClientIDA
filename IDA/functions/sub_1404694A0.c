//----- (00000001404694A0) ----------------------------------------------------
void __fastcall sub_1404694A0(__int64 a1, int a2, int a3)
{
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rbx
	__int64 i; // rbx
	__int64 v8; // rax
	__int64 v9; // rcx

	v4 = sub_1404693C0(a1, a2, a3);
	v5 = v4;
	if (v4)
	{
		if (*(int*)(v4 + 28) <= 0)
		{
			v6 = *(_QWORD*)(v4 + 72);
			if (v6)
			{
				for (i = v6 - 1; i >= 0; --i)
				{
					v8 = sub_140561C30(qword_140C65B70, *(_DWORD*)(*(_QWORD*)(v5 + 64) + 4 * i));
					if (v8)
					{
						v9 = *(_QWORD*)(v8 + 72);
						if (v9)
						{
							while (*(_DWORD*)(v9 + 64) != *(_DWORD*)(a1 + 8))
							{
								v9 = *(_QWORD*)(v9 + 40);
								if (!v9)
									goto LABEL_11;
							}
							sub_140717FA0(v9);
						}
					}
				LABEL_11:
					;
				}
			}
		}
	}
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

