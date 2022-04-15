//----- (00000001406A5BA0) ----------------------------------------------------
__int64 __fastcall sub_1406A5BA0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	int v4; // ebp
	__int64 v5; // rcx
	unsigned __int64 v6; // r13
	__int64 v7; // r13
	__int64 v8; // rax
	__int64 v9; // r15
	int v10; // eax
	int v11; // esi
	unsigned int v12; // ebx
	unsigned int v13; // ecx
	__int64 v14; // rax
	_DWORD* v15; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = v2;
	if (v2 && (v5 = sub_1405B15C0(*(_QWORD*)(qword_140C659F0 + 824), *(_DWORD*)(*(_QWORD*)(v2 + 8) + 4i64))) != 0)
	{
		v6 = **(unsigned int**)(v3 + 8);
		if (v6 < (__int64)(*(_QWORD*)(v5 + 256) - *(_QWORD*)(v5 + 248)) >> 3
			&& (v7 = *(_QWORD*)(*(_QWORD*)(v5 + 248) + 8 * v6)) != 0)
		{
			v8 = sub_140206C60(*(_DWORD*)(v7 + 4));
			v4 = 0;
			v9 = v8;
			if (v8)
				v10 = *(_DWORD*)(v8 + 128);
			else
				v10 = 0;
			v11 = 0;
			if ((unsigned int)(v10 - 4) <= 1)
			{
				v12 = 0;
				do
				{
					if (v12 >= 5)
						break;
					v13 = *(_DWORD*)(v9 + 4i64 * v12 + 72);
					if (v13)
					{
						v14 = sub_140204EA0(v13);
						if (v14)
						{
							if (*(_DWORD*)(v7 + 4i64 * v12 + 36) != *(_DWORD*)(v14 + 8))
								v11 = 1;
						}
					}
					++v12;
				} while (!v11);
			}
			LOBYTE(v4) = v11 != 0;
		}
		else
		{
			v4 = 0;
		}
	}
	else
	{
		v4 = 0;
	}
	v15 = (_DWORD*)a1[2];
	*v15 = v4;
	v15[2] = 1;
	a1[2] += 16i64;
	return 1i64;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;

