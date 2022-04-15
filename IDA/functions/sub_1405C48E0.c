//----- (00000001405C48E0) ----------------------------------------------------
__int64 __fastcall sub_1405C48E0(__int64 a1, unsigned int* a2, unsigned int a3, _QWORD* a4, int a5)
{
	__int64 result; // rax
	unsigned int v9; // ebp
	__int64 v10; // rbx
	signed int v11; // edx
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // [rsp+20h] [rbp-28h]

	if (!a3 || (result = sub_1405C47E0((_DWORD*)a1, a3, a5, a2), !(_DWORD)result))
	{
		v9 = 0;
		v10 = 0i64;
		if (a4[1])
		{
			while (1)
			{
				result = sub_1405C4690((_DWORD*)a1, *(_DWORD*)(*a4 + 4 * v10), a5, a2);
				if ((_DWORD)result)
					break;
				if ((unsigned __int64)++v10 >= a4[1])
					goto LABEL_6;
			}
		}
		else
		{
		LABEL_6:
			v11 = *a2;
			if (*(_DWORD*)(a1 + 268) != 16 && !*(_DWORD*)(a1 + 340)
				|| *(_QWORD*)(a1 + 208)
				|| *(_DWORD*)(a1 + 172)
				|| *(_DWORD*)(a1 + 180))
			{
				return 1;
			}
			else
			{
				v12 = *(_QWORD*)(a1 + 72);
				v13 = v12;
				v14 = *(_QWORD*)(v12 + 8);
				while (v14)
				{
					if (*(_DWORD*)(v14 + 32) < v11)
					{
						v14 = *(_QWORD*)(v14 + 24);
					}
					else
					{
						v13 = v14;
						v14 = *(_QWORD*)(v14 + 16);
					}
				}
				if (v13 == v12 || (v15 = v13, v11 < *(_DWORD*)(v13 + 32)))
					v15 = *(_QWORD*)(a1 + 72);
				if (v12 != v15 && !*(_DWORD*)(v15 + 60))
					return 14;
			}
			return v9;
		}
	}
	return result;
}

