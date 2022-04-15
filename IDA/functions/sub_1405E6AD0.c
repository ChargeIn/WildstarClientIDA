//----- (00000001405E6AD0) ----------------------------------------------------
__int64 __fastcall sub_1405E6AD0(__int64* a1, __int64* a2, __int64* a3)
{
	__int64 v4; // rdx
	__int64 result; // rax
	__int64 v8; // rdi
	unsigned int v9; // ebx
	__int64 v10; // rax
	int* v11; // rcx
	int v12; // r8d
	unsigned __int64 v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // r9
	__int64 v16; // r15
	__int64 v17; // rbp
	unsigned int v18; // ebx
	__int64 v19; // rsi
	__int64 v20; // rcx
	int v21; // r8d
	unsigned int v22; // ebx
	__int64 v23; // rdi
	__int64 v24; // rcx
	__int64 v25; // rcx
	unsigned int v26; // r9d

	v4 = *a2;
	result = *(_DWORD*)(v4 + 4) - 33;
	switch (*(_DWORD*)(v4 + 4))
	{
	case '!':
	case '#':
	case '&':
	case '(':
	case 'L':
	case 'M':
		result = sub_1401E98E0(*(_DWORD*)(v4 + 8));
		v8 = result;
		if (!result)
			return result;
		v9 = 0;
		break;
	default:
		return result;
	}
	while (1)
	{
		if (qword_140C63838)
		{
			result = qword_140C63838(off_140A6DAF0, qword_140C63858);
		}
		else
		{
			if (dword_140C64D70)
				return result;
			result = sub_140242AE0();
			if ((int)result < 0)
				return result;
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64068 + 40i64))(qword_140C64068);
		}
		if (v9 >= (unsigned int)result)
			return result;
		if (qword_140C63848)
		{
			v10 = qword_140C63848(off_140A6DAF0, v9, qword_140C63858);
		}
		else
		{
			if (dword_140C64D70)
			{
				v11 = 0i64;
				goto LABEL_18;
			}
			if ((int)sub_140242AE0() < 0)
			{
				v11 = 0i64;
				goto LABEL_18;
			}
			v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64068 + 32i64))(qword_140C64068, v9);
		}
		v11 = (int*)v10;
	LABEL_18:
		result = *(unsigned int*)(v8 + 12);
		if (v11[5] == (_DWORD)result)
			break;
		++v9;
	}
	v12 = *v11;
	if (*v11)
	{
		v13 = a1[1];
		v14 = 0i64;
		if (v13)
		{
			v15 = *a1;
			result = 0i64;
			while (1)
			{
				result = *(_QWORD*)(v15 + 8 * result);
				if (*(_DWORD*)(result + 8) == v12)
					break;
				v14 = (unsigned int)(v14 + 1);
				result = (unsigned int)v14;
				if ((unsigned int)v14 >= v13)
					return result;
			}
			v16 = *(_QWORD*)(v15 + 8 * v14);
			if (v16)
			{
				v17 = 0i64;
				if (*(_QWORD*)(v16 + 112))
				{
					while (2)
					{
						v18 = *(_DWORD*)(*(_QWORD*)(v16 + 104) + 4 * v17);
						result = (__int64)qword_140C63840;
						if (qword_140C63840)
						{
							result = qword_140C63840(off_140A6DD58, v18, qword_140C63858);
						LABEL_33:
							v19 = result;
							if (result)
							{
								if (*(_DWORD*)(result + 28))
								{
									v20 = *a2;
									result = *(unsigned int*)(*a2 + 36);
									if (!(_DWORD)result || (_DWORD)result == *(_DWORD*)(v19 + 12))
									{
										v21 = *(_DWORD*)(v20 + 60);
										if (!v21
											|| (result = sub_14049C010(v20, *(_QWORD*)(qword_140C65898 + 120), v21, *(_DWORD*)(v19 + 12)),
												(_DWORD)result))
										{
											result = *a2;
											if (*(_DWORD*)(*a2 + 4) != 35)
											{
												v22 = 0;
												v23 = 0i64;
												while (1)
												{
													v24 = a2[3];
													if (v24)
													{
														v25 = *(_QWORD*)(v23 + v24);
														if (v25)
														{
															v26 = *(_DWORD*)(v19 + 12);
															if (*(_DWORD*)(v25 + 12) == v26)
																break;
															result = sub_14049C010(
																v25,
																*(_QWORD*)(qword_140C65898 + 120),
																*(_DWORD*)(v25 + 20),
																v26);
															if ((_DWORD)result)
																break;
														}
													}
													++v22;
													v23 += 8i64;
													if (v22 >= 0x20)
														goto LABEL_48;
												}
											}
											result = sub_140003460(a3, (int*)v19);
										}
									}
								}
							}
						}
						else if (!dword_140C654F8)
						{
							result = sub_1402459A0();
							if ((int)result >= 0)
							{
								result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63868 + 24i64))(
									qword_140C63868,
									v18);
								goto LABEL_33;
							}
						}
					LABEL_48:
						if ((unsigned __int64)++v17 >= *(_QWORD*)(v16 + 112))
							return result;
						continue;
					}
				}
			}
		}
	}
	return result;
}
// 1405E6CEF: conditional instruction was optimized away because ebx.4<20u
// 140A6DAF0: using guessed type wchar_t *off_140A6DAF0[2];
// 140A6DD58: using guessed type wchar_t *off_140A6DD58[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63868: using guessed type __int64 qword_140C63868;
// 140C64068: using guessed type __int64 qword_140C64068;
// 140C64D70: using guessed type int dword_140C64D70;
// 140C654F8: using guessed type int dword_140C654F8;
// 140C65898: using guessed type __int64 qword_140C65898;

