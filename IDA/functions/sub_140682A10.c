//----- (0000000140682A10) ----------------------------------------------------
__int64 __fastcall sub_140682A10(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	__int64 v3; // r10
	__int64 v4; // r10
	__int64 v5; // rax
	int* v6; // r10
	int v8; // [rsp+38h] [rbp+10h] BYREF

	if (qword_140C65970)
	{
		if (*(_QWORD*)(qword_140C65898 + 120))
		{
			v1 = sub_140056AB0(a1, 1u);
			if (v1)
			{
				v3 = *(_QWORD*)(v1 + 8);
				if (v3)
				{
					v4 = *(_QWORD*)(v3 + 8);
					if (v4)
					{
						v5 = sub_140617410(v2, *(_DWORD*)(v4 + 4));
						if (v5)
						{
							if (*(_DWORD*)(*(_QWORD*)(v5 + 152) + 4i64) == 4 && *(_DWORD*)v5 == 1)
							{
								v8 = 0;
								v8 = *v6;
								sub_1403F4900(qword_140C65898, 0x67Du, (__int64)&v8);
							}
						}
					}
				}
			}
		}
	}
	return 0i64;
}
// 140682A58: variable 'v2' is possibly undefined
// 140682A8E: variable 'v6' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

