//----- (000000014039EF50) ----------------------------------------------------
__int64 __fastcall sub_14039EF50(__int64 a1, int a2)
{
	int v3; // edx
	int v4; // edx
	int v5; // edx
	BOOL v7; // eax
	unsigned int v8; // ecx
	unsigned int v9; // ebx
	BOOL v10; // esi
	__int64 v11; // rax

	v3 = a2 - 1;
	if (v3)
	{
		v4 = v3 - 1;
		if (v4)
		{
			v5 = v4 - 1;
			if (v5)
			{
				if (v5 != 1)
					return 0i64;
				v7 = sub_14039E1A0(a1);
				v8 = 420;
			}
			else
			{
				v7 = sub_14039E1A0(a1);
				v8 = 419;
			}
		}
		else
		{
			v7 = sub_14039E1A0(a1);
			v8 = 422;
		}
	}
	else
	{
		v7 = sub_14039E1A0(a1);
		v8 = 421;
	}
	v9 = 0;
	v10 = v7;
	v11 = sub_140200220(v8);
	if (v11)
		v9 = *(_DWORD*)(v11 + 4i64 * v10 + 4);
	return sub_1403ACD90(qword_140C65B70, v9, *(_QWORD*)(a1 + 120));
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

