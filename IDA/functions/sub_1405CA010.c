//----- (00000001405CA010) ----------------------------------------------------
__int64 __fastcall sub_1405CA010(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	unsigned int v4; // r15d
	__int64 v5; // r14
	int v6; // ebp
	unsigned __int64 i; // rdi
	_DWORD* v8; // r8
	__int64 v9; // rdx
	__int64 v10; // rcx

	result = qword_140C65898;
	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 128i64))(a1, 1i64);
		v3 = result;
		if (result)
		{
			v4 = **(_DWORD**)(result + 112);
			v5 = *(_QWORD*)(qword_140C65898 + 120);
			if (v5)
			{
				if (!*(_DWORD*)(v5 + 592))
				{
					result = sub_1405CA250(qword_140C65898, *(_DWORD*)(a1 + 280));
					v6 = result;
					if ((_DWORD)result)
					{
						for (i = 0i64; i < *(_QWORD*)(v3 + 104); ++i)
						{
							result = *(_QWORD*)(qword_140C65898 + 25408);
							if (result)
							{
								while (1)
								{
									v8 = *(_DWORD**)(result + 48);
									if (v8)
									{
										if (*(_DWORD*)(result + 32) == **(_DWORD**)(v3 + 112)
											&& *v8 == **(_DWORD**)(*(_QWORD*)(v3 + 96) + 8 * i))
										{
											break;
										}
									}
									result = *(_QWORD*)(result + 24);
									if (!result)
										goto LABEL_12;
								}
							}
							else
							{
							LABEL_12:
								v9 = *(_QWORD*)(v3 + 96) + 8 * i;
								result = *(_QWORD*)v9;
								if ((*(_BYTE*)(*(_QWORD*)v9 + 68i64) & 0x40) == 0 && (*(_BYTE*)(result + 88) & 1) != 0)
								{
									if (!*(_DWORD*)(result + 80)
										|| (result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
											qword_140C659A0,
											v5,
											*(unsigned int*)(result + 80),
											0i64,
											0i64,
											0),
											(_DWORD)result))
									{
										if (!sub_1403B5290(v3)
											|| (v10 = *(_QWORD*)(*(_QWORD*)(v3 + 96) + 8 * i),
												result = sub_1403BFB60(v10, v4, *(_DWORD*)(v10 + 84)),
												(_DWORD)result))
										{
											result = (__int64)sub_14018B280(320i64, 0);
											if (result)
												result = sub_140549B90(
													result,
													**(_DWORD**)(v3 + 112),
													*(_QWORD*)(*(_QWORD*)(v3 + 96) + 8 * i),
													v6,
													v6,
													0,
													(__int64*)(a1 + 416),
													1,
													0,
													*(_DWORD*)(*(_QWORD*)(v3 + 8) + 108i64),
													0i64,
													a1);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

