//----- (00000001405BA010) ----------------------------------------------------
__int64 __fastcall sub_1405BA010(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	__int64 v8; // rdi
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rcx

	if (*(char*)(a1 + 28) < 0 && a2 == 1)
	{
		v8 = sub_1405BA0B0(a1);
		if (v8)
		{
			if (!sub_1405BCF50(a1))
			{
				v9 = *(_QWORD*)(v8 + 72);
				if (v9)
				{
					v10 = sub_140561C30(qword_140C65B70, *(_DWORD*)(*(_QWORD*)(v8 + 64) + 4 * v9 - 4));
					if (v10)
						sub_14039CDA0(v11, v10);
				}
			}
		}
	}
	return sub_1400D2120(a1, a2, a3, a4);
}
// 1405BA07F: variable 'v11' is possibly undefined
// 140C65B70: using guessed type __int64 qword_140C65B70;

