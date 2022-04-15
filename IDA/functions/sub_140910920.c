//----- (0000000140910920) ----------------------------------------------------
__int64 __fastcall sub_140910920(_WORD* a1, _BYTE* a2, unsigned int a3, __int64 a4)
{
	_WORD* v7; // rbx
	__int16 v8; // cx
	__int64 result; // rax
	__int64 v10; // rax
	bool v11; // zf
	__int64 v12; // rax
	_WORD* v13; // rbx
	__int64 v14; // rax
	_WORD* v15; // rbx
	__int64 v16; // rax
	_WORD* v17; // rdx
	int v18; // r8d
	__int64 v19; // r8
	_BYTE* v20; // rdx
	__int64 v21; // r9
	__int64 v22; // r8
	_BYTE* v23; // rdx
	__int64 v24; // r9
	__int64 v25; // r8
	_BYTE* v26; // rdx
	__int64 v27; // r9
	char v28; // r11
	__int64 v29; // r8
	_BYTE* v30; // rdx
	__int64 v31; // r9
	_BYTE* v32; // rdx
	__int64 v33; // r8
	__int64 v34; // r9
	_BYTE* v35; // rdx
	__int64 v36; // r8
	__int64 v37; // r9
	_BYTE* v38; // rcx
	__int64 v39; // rdx
	char v40; // al
	unsigned int v41; // edx
	__int64 v42; // r8
	_BYTE* v43; // rdx
	__int64 v44; // r9
	__int64 v45; // r8
	_BYTE* v46; // rdx
	__int64 v47; // r9
	__int64 v48; // r8
	_BYTE* v49; // rdx
	__int64 v50; // r9
	char v51; // r11
	__int64 v52; // r8
	_BYTE* v53; // rdx
	__int64 v54; // r9
	_BYTE* v55; // rdx
	__int64 v56; // r8
	__int64 v57; // r9
	_BYTE* v58; // rdx
	__int64 v59; // r8
	__int64 v60; // r9
	__int64 v61; // rax
	int v62; // [rsp+30h] [rbp-18h]
	_WORD* v63; // [rsp+50h] [rbp+8h]

	v63 = a1;
	v62 = 1;
LABEL_2:
	v7 = a1 + 2;
	v8 = *a1;
	if ((unsigned __int16)(v8 - 127) <= 1u || (unsigned __int16)(v8 - 132) <= 1u)
		LABEL_4:
	++v7;
	while (2)
	{
		switch (*v7)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 0xC:
		case 0xD:
		case 0xE:
		case 0xF:
		case 0x10:
		case 0x12:
		case 0x14:
		case 0x16:
		case 0x17:
		case 0x18:
		case 0x19:
		case 0x1A:
		case 0x1B:
		case 0x1C:
		case 0x1F:
		case 0x20:
		case 0x3B:
		case 0x3C:
		case 0x3D:
		case 0x3E:
		case 0x3F:
		case 0x40:
		case 0x41:
		case 0x42:
		case 0x43:
		case 0x44:
		case 0x45:
		case 0x46:
		case 0x47:
		case 0x48:
		case 0x49:
		case 0x4A:
		case 0x4B:
		case 0x4C:
		case 0x4D:
		case 0x4E:
		case 0x4F:
		case 0x50:
		case 0x51:
		case 0x52:
		case 0x53:
		case 0x54:
		case 0x6C:
		case 0x6D:
		case 0x6E:
		case 0x6F:
		case 0x76:
		case 0x81:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
			return 0i64;
		case 4:
		case 5:
		case 0x57:
		case 0x58:
		case 0x5F:
			goto LABEL_4;
		case 6:
			v42 = 65i64;
			v43 = a2 + 1;
			v44 = 8i64;
			do
			{
				v42 += 4i64;
				v43 += 4;
				*(v43 - 5) |= ~*(_BYTE*)(*(_QWORD*)(a4 + 16) + v42 - 5);
				*(v43 - 4) |= ~*(_BYTE*)(*(_QWORD*)(a4 + 16) + v42 - 4);
				*(v43 - 3) |= ~*(_BYTE*)(*(_QWORD*)(a4 + 16) + v42 - 3);
				*(v43 - 2) |= ~*(_BYTE*)(*(_QWORD*)(a4 + 16) + v42 - 2);
				--v44;
			} while (v44);
			goto LABEL_82;
		case 7:
			v45 = 65i64;
			v46 = a2 + 1;
			v47 = 8i64;
			do
			{
				v45 += 4i64;
				v46 += 4;
				*(v46 - 5) |= *(_BYTE*)(v45 + *(_QWORD*)(a4 + 16) - 5);
				*(v46 - 4) |= *(_BYTE*)(v45 + *(_QWORD*)(a4 + 16) - 4);
				*(v46 - 3) |= *(_BYTE*)(v45 + *(_QWORD*)(a4 + 16) - 3);
				*(v46 - 2) |= *(_BYTE*)(v45 + *(_QWORD*)(a4 + 16) - 2);
				--v47;
			} while (v47);
			goto LABEL_82;
		case 8:
			v48 = 2i64;
			v49 = a2 + 1;
			v50 = 8i64;
			do
			{
				v48 += 4i64;
				v49 += 4;
				*(v49 - 5) |= ~*(_BYTE*)(v48 + *(_QWORD*)(a4 + 16) - 6);
				*(v49 - 4) |= ~*(_BYTE*)(v48 + *(_QWORD*)(a4 + 16) - 5);
				*(v49 - 3) |= ~*(_BYTE*)(v48 + *(_QWORD*)(a4 + 16) - 4);
				*(v49 - 2) |= ~*(_BYTE*)(v48 + *(_QWORD*)(a4 + 16) - 3);
				--v50;
			} while (v50);
			a2[1] |= 8u;
			goto LABEL_82;
		case 9:
			v51 = a2[1];
			v52 = 2i64;
			v53 = a2 + 1;
			v54 = 8i64;
			do
			{
				v52 += 4i64;
				v53 += 4;
				*(v53 - 5) |= *(_BYTE*)(v52 + *(_QWORD*)(a4 + 16) - 6);
				*(v53 - 4) |= *(_BYTE*)(v52 + *(_QWORD*)(a4 + 16) - 5);
				*(v53 - 3) |= *(_BYTE*)(v52 + *(_QWORD*)(a4 + 16) - 4);
				*(v53 - 2) |= *(_BYTE*)(v52 + *(_QWORD*)(a4 + 16) - 3);
				--v54;
			} while (v54);
			a2[1] &= ~8u;
			a2[1] |= v51;
			goto LABEL_82;
		case 0xA:
			v55 = a2 + 1;
			v56 = 161i64;
			v57 = 8i64;
			do
			{
				v56 += 4i64;
				v55 += 4;
				*(v55 - 5) |= ~*(_BYTE*)(v56 + *(_QWORD*)(a4 + 16) - 5);
				*(v55 - 4) |= ~*(_BYTE*)(v56 + *(_QWORD*)(a4 + 16) - 4);
				*(v55 - 3) |= ~*(_BYTE*)(v56 + *(_QWORD*)(a4 + 16) - 3);
				*(v55 - 2) |= ~*(_BYTE*)(v56 + *(_QWORD*)(a4 + 16) - 2);
				--v57;
			} while (v57);
			goto LABEL_82;
		case 0xB:
			v58 = a2 + 1;
			v59 = 161i64;
			v60 = 8i64;
			do
			{
				v59 += 4i64;
				v58 += 4;
				*(v58 - 5) |= *(_BYTE*)(v59 + *(_QWORD*)(a4 + 16) - 5);
				*(v58 - 4) |= *(_BYTE*)(v59 + *(_QWORD*)(a4 + 16) - 4);
				*(v58 - 3) |= *(_BYTE*)(v59 + *(_QWORD*)(a4 + 16) - 3);
				*(v58 - 2) |= *(_BYTE*)(v59 + *(_QWORD*)(a4 + 16) - 2);
				--v60;
			} while (v60);
			goto LABEL_82;
		case 0x11:
		case 0x15:
			a2[1] |= 0x3Cu;
			a2[16] |= 0x20u;
			a2[31] |= 0x80u;
			goto LABEL_82;
		case 0x13:
			a2[1] |= 2u;
			a2[4] |= 1u;
			a2[20] |= 1u;
			a2[31] |= 0x80u;
			goto LABEL_82;
		case 0x1D:
		case 0x23:
		case 0x24:
		case 0x2B:
			goto LABEL_60;
		case 0x1E:
		case 0x30:
		case 0x31:
		case 0x38:
			goto LABEL_62;
		case 0x21:
		case 0x22:
		case 0x25:
		case 0x26:
		case 0x2A:
		case 0x2C:
			v17 = v7 + 1;
			goto LABEL_22;
		case 0x27:
		case 0x28:
		case 0x2D:
			v17 = v7 + 2;
		LABEL_22:
			v18 = 0;
			goto LABEL_23;
		case 0x29:
			++v7;
		LABEL_60:
			sub_140911290((__int64)a2, v7 + 1, 0, a4, a3);
			goto LABEL_82;
		case 0x2E:
		case 0x2F:
		case 0x32:
		case 0x33:
		case 0x37:
		case 0x39:
			v17 = v7 + 1;
			v18 = 1;
			goto LABEL_23;
		case 0x34:
		case 0x35:
		case 0x3A:
			v17 = v7 + 2;
			v18 = 1;
		LABEL_23:
			v7 = sub_140911290((__int64)a2, v17, v18, a4, a3);
			continue;
		case 0x36:
			++v7;
		LABEL_62:
			sub_140911290((__int64)a2, v7 + 1, 1, a4, a3);
			goto LABEL_82;
		case 0x55:
		case 0x56:
		case 0x59:
		case 0x5A:
		case 0x5E:
		case 0x60:
			goto LABEL_28;
		case 0x5B:
		case 0x5C:
		case 0x61:
			++v7;
		LABEL_28:
			switch (v7[1])
			{
			case 6:
				v19 = 65i64;
				v20 = a2 + 1;
				v21 = 8i64;
				do
				{
					v19 += 4i64;
					v20 += 4;
					*(v20 - 5) |= ~*(_BYTE*)(*(_QWORD*)(a4 + 16) + v19 - 5);
					*(v20 - 4) |= ~*(_BYTE*)(*(_QWORD*)(a4 + 16) + v19 - 4);
					*(v20 - 3) |= ~*(_BYTE*)(*(_QWORD*)(a4 + 16) + v19 - 3);
					*(v20 - 2) |= ~*(_BYTE*)(*(_QWORD*)(a4 + 16) + v19 - 2);
					--v21;
				} while (v21);
				v7 += 2;
				continue;
			case 7:
				v22 = 65i64;
				v23 = a2 + 1;
				v24 = 8i64;
				do
				{
					v22 += 4i64;
					v23 += 4;
					*(v23 - 5) |= *(_BYTE*)(v22 + *(_QWORD*)(a4 + 16) - 5);
					*(v23 - 4) |= *(_BYTE*)(v22 + *(_QWORD*)(a4 + 16) - 4);
					*(v23 - 3) |= *(_BYTE*)(v22 + *(_QWORD*)(a4 + 16) - 3);
					*(v23 - 2) |= *(_BYTE*)(v22 + *(_QWORD*)(a4 + 16) - 2);
					--v24;
				} while (v24);
				v7 += 2;
				continue;
			case 8:
				v25 = 2i64;
				v26 = a2 + 1;
				v27 = 8i64;
				do
				{
					v25 += 4i64;
					v26 += 4;
					*(v26 - 5) |= ~*(_BYTE*)(v25 + *(_QWORD*)(a4 + 16) - 6);
					*(v26 - 4) |= ~*(_BYTE*)(v25 + *(_QWORD*)(a4 + 16) - 5);
					*(v26 - 3) |= ~*(_BYTE*)(v25 + *(_QWORD*)(a4 + 16) - 4);
					*(v26 - 2) |= ~*(_BYTE*)(v25 + *(_QWORD*)(a4 + 16) - 3);
					--v27;
				} while (v27);
				a2[1] |= 8u;
				v7 += 2;
				continue;
			case 9:
				v28 = a2[1];
				v29 = 2i64;
				v30 = a2 + 1;
				v31 = 8i64;
				do
				{
					v29 += 4i64;
					v30 += 4;
					*(v30 - 5) |= *(_BYTE*)(v29 + *(_QWORD*)(a4 + 16) - 6);
					*(v30 - 4) |= *(_BYTE*)(v29 + *(_QWORD*)(a4 + 16) - 5);
					*(v30 - 3) |= *(_BYTE*)(v29 + *(_QWORD*)(a4 + 16) - 4);
					*(v30 - 2) |= *(_BYTE*)(v29 + *(_QWORD*)(a4 + 16) - 3);
					--v31;
				} while (v31);
				a2[1] &= ~8u;
				a2[1] |= v28;
				v7 += 2;
				continue;
			case 0xA:
				v32 = a2 + 1;
				v33 = 161i64;
				v34 = 8i64;
				do
				{
					v33 += 4i64;
					v32 += 4;
					*(v32 - 5) |= ~*(_BYTE*)(v33 + *(_QWORD*)(a4 + 16) - 5);
					*(v32 - 4) |= ~*(_BYTE*)(v33 + *(_QWORD*)(a4 + 16) - 4);
					*(v32 - 3) |= ~*(_BYTE*)(v33 + *(_QWORD*)(a4 + 16) - 3);
					*(v32 - 2) |= ~*(_BYTE*)(v33 + *(_QWORD*)(a4 + 16) - 2);
					--v34;
				} while (v34);
				v7 += 2;
				continue;
			case 0xB:
				v35 = a2 + 1;
				v36 = 161i64;
				v37 = 8i64;
				do
				{
					v36 += 4i64;
					v35 += 4;
					*(v35 - 5) |= *(_BYTE*)(*(_QWORD*)(a4 + 16) + v36 - 5);
					*(v35 - 4) |= *(_BYTE*)(*(_QWORD*)(a4 + 16) + v36 - 4);
					*(v35 - 3) |= *(_BYTE*)(*(_QWORD*)(a4 + 16) + v36 - 3);
					*(v35 - 2) |= *(_BYTE*)(*(_QWORD*)(a4 + 16) + v36 - 2);
					--v37;
				} while (v37);
				goto LABEL_50;
			case 0x11:
			case 0x15:
				a2[1] |= 0x3Cu;
				a2[16] |= 0x20u;
				if (!a3)
					goto LABEL_50;
				a2[31] |= 0x80u;
				v7 += 2;
				break;
			case 0x13:
				a2[1] |= 2u;
				a2[4] |= 1u;
				a2[20] |= 1u;
				if (a3)
				{
					a2[31] |= 0x80u;
					v7 += 2;
				}
				else
				{
				LABEL_50:
					v7 += 2;
				}
				break;
			default:
				return 0i64;
			}
			continue;
		case 0x5D:
			goto LABEL_13;
		case 0x6A:
			goto LABEL_52;
		case 0x6B:
			a2[31] |= 0x80u;
		LABEL_52:
			v38 = a2;
			v39 = 32i64;
			do
			{
				v40 = (v38++)[(char*)(v7 + 1) - a2];
				*(v38 - 1) |= v40;
				--v39;
			} while (v39);
			switch (v7[17])
			{
			case 'b':
			case 'c':
			case 'f':
			case 'g':
				v7 += 18;
				continue;
			case 'h':
			case 'i':
				if (v7[18])
					goto LABEL_82;
				v7 += 20;
				break;
			default:
				goto LABEL_82;
			}
			continue;
		case 0x70:
			v7 += 4;
			continue;
		case 0x71:
			v41 = 2;
			v62 = 2;
			goto LABEL_83;
		case 0x72:
		case 0x73:
		case 0x74:
		case 0x75:
			return 2i64;
		case 0x77:
		case 0x7B:
		case 0x7C:
		case 0x7D:
		case 0x7E:
		case 0x7F:
		case 0x80:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
			result = sub_140910920(v7, a2, a3, a4);
			if (!(_DWORD)result || (_DWORD)result == 3)
				return result;
			if ((_DWORD)result != 1)
			{
				do
				{
					v10 = (unsigned __int16)v7[1];
					v11 = v7[v10] == 113;
					v7 += v10;
				} while (v11);
				v7 += 2;
				continue;
			}
		LABEL_82:
			v41 = v62;
		LABEL_83:
			v61 = (unsigned __int16)v63[1];
			v11 = v63[v61] == 113;
			a1 = &v63[v61];
			v63 = a1;
			if (v11)
				goto LABEL_2;
			return v41;
		case 0x78:
		case 0x79:
		case 0x7A:
			do
			{
				v12 = (unsigned __int16)v7[1];
				v11 = v7[v12] == 113;
				v7 += v12;
			} while (v11);
		LABEL_13:
			v7 += 2;
			continue;
		case 0x8C:
		case 0x8D:
		case 0x8E:
			v13 = v7 + 1;
			result = sub_140910920(v13, a2, a3, a4);
			if (!(_DWORD)result || (_DWORD)result == 3)
				return result;
			do
			{
				v14 = (unsigned __int16)v13[1];
				v11 = v13[v14] == 113;
				v13 += v14;
			} while (v11);
			v7 = v13 + 2;
			continue;
		case 0x9B:
			v15 = v7 + 1;
			do
			{
				v16 = (unsigned __int16)v15[1];
				v11 = v15[v16] == 113;
				v15 += v16;
			} while (v11);
			v7 = v15 + 2;
			continue;
		default:
			return 3i64;
		}
	}
}

