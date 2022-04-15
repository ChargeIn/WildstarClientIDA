//----- (00000001407AC5B0) ----------------------------------------------------
void __fastcall sub_1407AC5B0(__int64 a1, __int64 a2)
{
	unsigned int v2; // ebx
	__int64 v3; // r11
	__int64 v4; // r10
	unsigned int v5; // r8d
	unsigned __int64 v6; // r9
	__int64 v7; // rax

	v2 = 0;
	if (*(_QWORD*)(a1 + 144))
	{
		v3 = 0i64;
		do
		{
			if (a2 && (v4 = *(_QWORD*)(a2 + 8), v5 = 0, (v6 = (*(_QWORD*)(a2 + 16) - v4) >> 2) != 0))
			{
				v7 = 0i64;
				while (**(_DWORD**)(*(_QWORD*)(a1 + 136) + 8 * v3) != *(_DWORD*)(v4 + 4 * v7))
				{
					v7 = ++v5;
					if (v5 >= v6)
						goto LABEL_8;
				}
			}
			else
			{
			LABEL_8:
				*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v3) + 380i64) = 0;
			}
			v3 = ++v2;
		} while ((unsigned __int64)v2 < *(_QWORD*)(a1 + 144));
	}
}

