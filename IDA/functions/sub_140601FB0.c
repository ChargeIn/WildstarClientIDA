//----- (0000000140601FB0) ----------------------------------------------------
_BOOL8 __fastcall sub_140601FB0(__int64 a1)
{
	_QWORD* v1; // rax
	__int64 v2; // rdx
	__int64 v3; // rax
	unsigned int v4; // eax
	int v5; // ecx
	_BOOL8 result; // rax

	v1 = *(_QWORD**)(a1 + 64);
	result = 0;
	if (v1)
	{
		if (v1[12])
		{
			v2 = *(_QWORD*)(v1[11] + 8i64 * v1[13]);
			if (v2)
			{
				if (!*(_DWORD*)(v2 + 232))
				{
					v3 = sub_14024ACC0(*(_DWORD*)(v2 + 212));
					if (v3)
					{
						v4 = *(_DWORD*)(v3 + 20);
						if (v4 > 8)
							return 1;
						v5 = 420;
						if (!_bittest(&v5, v4))
							return 1;
					}
				}
			}
		}
	}
	return result;
}

