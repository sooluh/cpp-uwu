import crypto, { BinaryToTextEncoding } from 'crypto'

export const checksum = (
  data: any,
  algorithm: string = 'md5',
  encoding: BinaryToTextEncoding = 'hex'
) => {
  return crypto.createHash(algorithm).update(data, 'utf-8').digest(encoding)
}
