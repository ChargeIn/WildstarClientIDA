//----- (00000001400CBD70) ----------------------------------------------------
__int64 __fastcall sub_1400CBD70(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	unsigned __int16* v4; // r10
	__int64 v5; // r8
	unsigned __int16* v6; // r9
	int v7; // edx
	int v8; // eax
	__int64 v10; // rax

	v2 = *(_QWORD*)(a1 + 448);
	if (v2)
	{
		v4 = *(unsigned __int16**)(a2 + 8);
		v5 = 0i64;
		v6 = *(unsigned __int16**)(*(_QWORD*)(v2 + 40) + 16i64);
		v7 = *v6;
		if (v7 == *v4)
		{
			while ((_WORD)v7)
			{
				v7 = v6[v5 + 1];
				v8 = v4[++v5];
				if (v7 != v8)
					goto LABEL_5;
			}
			return 0i64;
		}
	LABEL_5:
		sub_1400035B0();
		return 2147500037i64;
	}
	v10 = sub_140152940(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 376i64), a2, a1);
	*(_QWORD*)(a1 + 448) = v10;
	if (!v10)
		goto LABEL_5;
	return 0i64;
}

